#!/usr/bin/env sh

perr () { 
    printf "\e[1m\e[31mERR: $1\e[0m"
}

pwrn () { 
    printf "\e[1m\e[33mWRN: $1\e[0m"
}

pok () {
    printf "\e[1m\e[32m$1\e[0m"
}

pinf () {
	printf "\e[1m\e[36m$1\e[0m"
}

[ -z "$SDL3_DIR" ] && perr "SDL3_DIR is empty\n" && exit
[ ! -d "$SDL3_DIR" ] && perr "$SDL3_DIR is not a folder\n" && exit

DISTRO_NAME=$(distro-name)
BUILD_ENVIRONMENT=build-$DISTRO_NAME
export LDFLAGS="$LDFLAGS -undefined dynamic_lookup"
rm -rf $BUILD_ENVIRONMENT
mkdir $BUILD_ENVIRONMENT
cmake -GNinja -S . -B $BUILD_ENVIRONMENT -DCMAKE_PREFIX_PATH="$SDL3_DIR"
cmake --build $BUILD_ENVIRONMENT
