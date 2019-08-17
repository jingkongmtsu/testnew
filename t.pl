use strict;
use warnings;

my $xxx=$ENV{'EMUL_HOME'};
print "$xxx/xx\n";
open(my $rebuildcmd, '>', "$ENV{'EMUL_HOME'}/rebuild.cmd") or die "Could not open file rebuild.cmd!";
print $rebuildcmd "rm xxx", "\n";
close $rebuildcmd

