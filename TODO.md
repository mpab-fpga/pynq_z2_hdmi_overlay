# Project tracking

## Todo

- implement design
- issue: vitis v2023.2 where app create fails to generate the *_app and *_system projects, leading to an error when building the (non-existent) projects

```tcl
app create -name $APP -platform $PLATFORM -template {Hello World} -domain standalone_domain -lang c
```

- bug: create-vitis-tcl should check if source files are present before importing

```tcl
importsources -name $APP -path ../src/
```

- test vitis empty and hello world variants
- merge changes back into template


## Done

- create project from template
