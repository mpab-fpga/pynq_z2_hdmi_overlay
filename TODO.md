# Project tracking

## Done

- misc. script compatibility improvements for macos
- fix issue: vitis v2023.2 where app create fails to generate the *_app and *_system projects, leading to an error when building the (non-existent) projects
  - temporary hack in create-vitis.tcl, requires cleanup/rewrite
- create project from template
- merge changes back into template

## Doing

- replace Vitis xsct with python (firmware create and build)
  - use command: vitis -s *-vitis.py
  - reverse engineer python template
  - update master template project

## Todo

- implement design
- test vitis empty and hello world variants
- bug: create-vitis-tcl should check if source files are present before importing
```tcl
importsources -name $APP -path ../src/
```