## qTESLA library: implementation in portable C

Includes support for the heuristic parameter sets qTESLA-I, qTESLA-III-speed, and qTESLA-III-size.

## Linux

To compile, do:

```sh
make 
```

which by default sets `ARCH=x64`, `CC=gcc` and `DEBUG=FALSE`, or do:

```sh
make ARCH=[x64/x86/ARM/ARM64] CC=[gcc/clang] DEBUG=[TRUE/FALSE]
```

The following executables are generated: `test_qtesla-SET`, `PQCtestKAT_sign-SET` and `PQCgenKAT_sign-SET`,
where `SET = [I / III-speed / III-size]` represents one of the available parameter sets.

To get cycle counts for key generation, signing and verification, execute:

```sh
./test_qtesla-SET
```

To test against known answer values in the KAT folder, execute:

```sh
./PQCtestKAT_sign-SET
```

To generate new KAT files, execute:

```sh
./PQCgenKAT_sign-SET
```

Using `DEBUG=TRUE` generates statistics on acceptance rates and timings for internal functions. 

## Windows

Open the solution file `Visual Studio\qTESLA.sln` in Visual Studio 2015 and build for one of the available 
configurations (combinations of Release\Debug and x64\x86). This creates a few executables named `test-qTESLA-SET.exe`.