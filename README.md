# daemonize linux c minimal example

Run a command always in the background.

## build
```
gcc main.c
```

## Run

After 10 secconds the file '/tmp/hello.txt' will be in your
`/tmp` directory. If you delete it, it will be recreated.

Before you run, confirm the file is *not* there.
```
file /tmp/hello.txt
/tmp/hello.txt: cannot open `/tmp/hello.txt' (No such file or directory)
```

### Run the program
```
./a.out
```

Confirm the file is now there:
```
file /tmp/hello.txt
/tmp/hello.txt: empty
```

If you remove the file `rm /tmp/hello.txt` it will soon be recreated. Why? Because of the endless `while` loop.

## View the daemonized process running
Note: If you run the process twice by mistake you will have multiple
daemonized processes running of the same program.

```
ps aux | grep 'a.out'
```

## Stop the process
```
killall a.out
```
