# baby_shark

baby_shark allows a system administrator to delegate authority to give certain users (or groups of users) the ability to run some (or all) commands as root or another user while providing an audit trail of the commands and their arguments.

## Description

For the Project by our school ETNA, we had to do a project in c that copy sudo.

## Getting Started

### Dependencies

* Need command make. 
```
apt-get install make
```

### Installing

* git clone or download the repository in gitlab.
* use the command make to install the program.
```
make
```

### Executing program

* To run the program
```
baby_shark
```
* Various flags available.
```
baby_shark -u [user]
```
```
baby_shark -b
```
```
baby_shark -S
```
```
baby_shark -V
```
```
baby_shark -g [group]
```
```
baby_shark -H [user]
```
* For more info, use the man
```
man baby_shark
```

## Authors

Sid-Ahmed NOUAR  [Linkedin](https://www.linkedin.com/in/sid-ahmed-nouar-4347b5159/)

Fabio Machado   [Linkedin](https://www.linkedin.com/in/fabio-aires-machado/)

## Version History

* 0.1
    * Initial Release

## License

This project is an opensource, read the CGG of ETNA school Paris.

