# Project tracking

## Todo

- implement design
- bug: create-vitis-tcl should check if source files are present before importing

```tcl
importsources -name $APP -path ../src/
```

- test vitis empty and hello world variants

## Done

- fix issue: vitis v2023.2 where app create fails to generate the *_app and *_system projects, leading to an error when building the (non-existent) projects
  - temporary hack in create-vitis.tcl, requires cleanup/rewrite
- create project from template
- merge changes back into template
