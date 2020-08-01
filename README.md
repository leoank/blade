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
cd builddir

# install all deps
conan profile update settings.compiler.libcxx=libstdc++11 
conan install ../ --build

# Compile targets
meson compile
```