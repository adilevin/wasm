$project_root = (get-item .).parent.FullName
$build_cmd = "docker run -v ${project_root}:/src -w /src/target -u emscripten trzeci/emscripten"
$run_cmd   = "docker run --name emrun -p 6931:6931 -v ${project_root}:/src -w /src/target -u emscripten trzeci/emscripten"

function Run {
    echo " "
    echo ==================================================
    echo "$args"
    echo --------------------
    
    Invoke-Expression "$docker_build $args"
}

mkdir ../target 2> $null 1>$null
Run $build_cmd cmake ../build
Run $build_cmd make clean
Run $build_cmd make

#echo "docker rm -f emrun > null" > ../target/emrun.ps1
#echo "$docker_cmd_for_execute emrun --hostname 0.0.0.0 --no_browser index.html" >> ../target/emrun.ps1
docker rm -f emrun > null
Run $run_cmd emrun --hostname 0.0.0.0 --no_browser index.html

pause
