# Baremetal-Serv-Template
A simple hello world template program for the SERV demonstrating a working I/O implementation

The standard library printf function is not supported, use printf_ instead. This implementation of printf_ is not our own, and is taken from (https://github.com/mpaland/printf)

Compilation command:  
```$ make hex```

This will generate a file called a.hex, which can be run on the SERV via fusesoc:  
```$ fusesoc run --target=verilator_tb servant --uart_baudrate=91000 --firmware=a.hex --memsize=640000``` 

