!The code can be compiled with 
! gfortran -fdec-structure  modb.f modc.f
! the module is defined in modb.f.

      program main
      use mtest
      implicit none
      record /point/ base

      call fp(base)

      write(*,*) base.x
      end

