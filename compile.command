clang++ ./*.cpp ./*/*.cpp -iquote ./ -iquote ./meshes/ -Wall -l SDL2 -l glew -framework OpenGL -std=c++11 -o game.out
