# Code IPV4
A partir de la saisie d’une adresse IPv4 sous forme de quatre entiers X, Y,
Z, T, écrire un programme C/C++ qui permet d’afficher sa classe, le masque de
sous-réseau, l’adresse de diffusion et la plage d’adresses d’hôtes utilisables.
Prévoir des messages d’erreurs en cas de saisie d’une adresse IP Incorrecte
(inexistante ou inexploitable).


## Compilation
Pour compiler le programme, vous pouvez exécuter une des lignes de commande
suivante :

- sous linux :

```sh
gcc main.c -o bin/ipv4
```

Cette commande utilise seulement le compilateur `gcc` pour compiler
les sources.

ou

```sh
make
```
Alors que celle-ci utilise en plus du compilateur, mais aussi le programme
`cmake` pour compiler le programme.


## Exécution
Pour exécuter le programme :
	- sous linux :

```sh
./bin/ipv4
```
