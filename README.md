
# いろは(iroha)

 いろは(iroha) is ...

<<<<<<< HEAD

準備：

add-apt-repository ppa:webupd8team/java
apt-get update
apt-get install oracle-java8-installer
apt-get install g++
apt-get install make
apt-get install cmake
apt-get install build-essential
apt-get install zlib1g-dev libssl-dev

git submodule init
git submodule update

AERON:
./gradlew
./gradlew
./cppbuild/cppbuild

mkdir -p cppbuild/Debug
cd cppbuild/Debug
cmake ../..
cmake --build . --clean-first
ctest

yaml-cpp:
=======
# Required

# Usage
```
>>>>>>> feature/test
mkdir build
cd build
cmake ..
make
<<<<<<< HEAD
sudo make install
=======
ctest
```
>>>>>>> feature/test
