# WHAT'S UP NERDS
RUN MAKE YOU NERD
## Tools and stuff
### Things that come in binutils
- objdump
  - can dump symbols (think symbols), dynamic symbols (in dynamic (non static) binaries), headers, and disassembly
  - objdump -D helloworld | less
    - look for main, which is (sort of) where execution starts

- file
  - reads magic numbers to tell what a binary file is
  - file helloworld
    - zach: try to explain what this output actually is cause its sorta nuts
    - look at hello world in a hex editor and note that its starts with 0x454c46, or ELF in hex

- strings
  - searchs a binary for null terminated strings and prints them
  - strings helloworld | less

- readelf
  - specific to elfs, not gonna cover it

- ltrace / strace / etc
  - might cover it later, look it up yourself for fun!

### Stuff that's free
- radare2
  - https://github.com/radare/radare2
- there's trials of binary ninja and ida
- angr
  - python framework
  - reallllllly good docs online, check it out some weekend when you have a chance

### Stuff that's for pay
- me, I'm cheap
- Ida
  - LITERALLY THOUSANDS OF DOLLARS
  - (i might try to get the college to buy it in the labs, more news in 2019)
- Binary Ninja
  - Literally not thousands of dollars

# Zach, show this stuff off
- k lol

# Philosophy
- tools are tools.  what matters is the user.
- you, the user, decide the outcome
- we make the future
- computers are actually evil
- we have to free humanity
- we have to
  - why won't you listen?

- but for real: Decide on the conclusion you want, then make that conclusion happen
  - (I hold that this is the key to all hacking)
