This is a Linux driver that works with Linux 3.x kernels (well, at least 3.17)
for the WCH four port serial PCIe cards. It will probably work with other
WCH multiport serial cards as well.

Note the device names will be /dev/ttyWCHn where n is 0, 1, 2...

This is based off an existing driver and I fixed a few things in the 
registration code to stop Kernel oops from happening. I also cleaned a 
little bit in that area, but not too much. 

As far as I know, it works. If not, file a bug and I'll do what I can, but
remember I'm not the original author nor am I associated with WCH other
than I own one of their cards.
