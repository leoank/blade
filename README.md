# Blade

This is blade!

## Requirements

- GCC/Clang
- [Meson](https://mesonbuild.com/Getting-meson.html)
- [Conan](https://docs.conan.io/en/latest/installation.html)

## Getting Started

```bash
# create a build directory
mkdir builddir 

# install all deps
cd builddir
conan profile update settings.compiler.libcxx=libstdc++11 
conan install ../ --build
cd ..

# Compile targets
export PKG_CONFIG_PATH=$PWD/builddir 
meson builddir
meson compile -C builddir
```