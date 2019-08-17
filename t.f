      program main
      character(len=120):: rin, rout, rcmd
      rin = "/nfshome/jing/test/r.in"
      rout = "/nfshome/jing/test/r.out"
      rcmd = "/nfshome/jing/test/t.sh"
      call execute_command_line(rcmd)
      end
