// ----------------------------------------------------------------
// ESPECIFICAÇÃO: O programa deve determinar se um identificador
// aaaa
// é ou não válido. Um identificador válido deve começar com uma
// letra e conter apenas letras ou dígitos. Além disto, deve ter
// no mínimo 1 caractere e no máximo 6 caracteres de comprimento
// ----------------------------------------------------------------

#include <stdio.h>

int valid_s(char ch) {
  if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    return 1;
  else
    return 0;
}

int valid_f(char ch) {
  if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
    return 1;
  else
    return 0;
}

int main(void) {
  char achar;
  int  length, valid_id;
  length = 0;
  printf("Identificador: ");
  achar = fgetc(stdin);
  valid_id = valid_s(achar);
  if(valid_id) {
    length = 1;
  }
  achar = fgetc(stdin);
  while(achar != '\n') {
    if(!(valid_f(achar))) {
      valid_id = 0;
    }
    length++;
    achar = fgetc(stdin);
  }
  if (valid_id && (length >= 1) && (length < 6)) {
    printf("Valido\n");
    return 0;
  }
  else {
    printf("Invalido\n");
    return 1;
  }
}


////// 20102800@l3086089:~/Downloads/identifier$ make

// gcc -g -Wall -Wfatal-errors  -o identifier identifier.c
// identifier.c: In function ‘main’:
// identifier.c:40:5: warning: statement with no effect [-Wunused-value]
//    40 |     length
//       |     ^~~~~~
// identifier.c:40:11: error: expected ‘;’ before ‘achar’
//    40 |     length
//       |           ^
//       |           ;
//    41 |     achar = fgetc(stdin);
//       |     ~~~~~  
// compilation terminated due to -Wfatal-errors.
// make: *** [Makefile:8: identifier] Error 1

////// 20102800@l3086089:~/Downloads/identifier$ make

// gcc -g -Wall -Wfatal-errors  -o identifier identifier.c

////// 20102800@l3086089:~/Downloads/identifier$ git status

// On branch main
// Your branch is up to date with 'origin/main'.

// Changes not staged for commit:
//   (use "git add <file>..." to update what will be committed)
//   (use "git restore <file>..." to discard changes in working directory)
//         modified:   identifier.c

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         identifier

// no changes added to commit (use "git add" and/or "git commit -a")

////// 20102800@l3086089:~/Downloads/identifier$ git add identifier.c

////// 20102800@l3086089:~/Downloads/identifier$ git commit 

// [main bb2f7de] Commit 1 na aula
//  Committer: Felipe Scherer Lacerda <20102800@facin.portoalegre.pucrsnet.br>
// Your name and email address were configured automatically based
// on your username and hostname. Please check that they are accurate.
// You can suppress this message by setting them explicitly. Run the
// following command and follow the instructions in your editor to edit
// your configuration file:

//     git config --global --edit

// After doing this, you may fix the identity used for this commit with:

//     git commit --amend --reset-author

//  1 file changed, 1 insertion(+), 1 deletion(-)

////// 20102800@l3086089:~/Downloads/identifier$ git push

// Enumerating objects: 5, done.
// Counting objects: 100% (5/5), done.
// Delta compression using up to 4 threads
// Compressing objects: 100% (3/3), done.
// Writing objects: 100% (3/3), 312 bytes | 312.00 KiB/s, done.
// Total 3 (delta 2), reused 0 (delta 0), pack-reused 0
// remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
// To https://github.com/zClank/identifier.git
//    3091dd9..bb2f7de  main -> main

////// 20102800@l3086089:~/Downloads/identifier$ git status

// On branch main
// Your branch is up to date with 'origin/main'.

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         identifier

// nothing added to commit but untracked files present (use "git add" to track)

////// 20102800@l3086089:~/Downloads/identifier$ git add identifier.c 

////// 20102800@l3086089:~/Downloads/identifier$ git commit

// Author identity unknown

// *** Please tell me who you are.

// Run

//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// to set your account's default identity.
// Omit --global to set the identity only in this repository.

// fatal: unable to auto-detect email address (got 'unknown@facin.portoalegre.pucrsnet.br')

////// 20102800@l3086089:~/Downloads/identifier$ git status

// On branch main
// Your branch is up to date with 'origin/main'.

// Changes to be committed:
//   (use "git restore --staged <file>..." to unstage)
//         modified:   identifier.c

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         identifier

////// 20102800@l3086089:~/Downloads/identifier$ git commit

// Author identity unknown

// *** Please tell me who you are.

// Run

//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// to set your account's default identity.
// Omit --global to set the identity only in this repository.

// fatal: unable to auto-detect email address (got 'unknown@facin.portoalegre.pucrsnet.br')

////// 20102800@l3086089:~/Downloads/identifier$ git push

// Everything up-to-date

////// 20102800@l3086089:~/Downloads/identifier$ git commit

// Author identity unknown

// *** Please tell me who you are.

// Run

//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// to set your account's default identity.
// Omit --global to set the identity only in this repository.

// fatal: unable to auto-detect email address (got 'unknown@facin.portoalegre.pucrsnet.br')

////// 20102800@l3086089:~/Downloads/identifier$ git config --global user.email "felipelacerda2001@gmail.com"

////// 20102800@l3086089:~/Downloads/identifier$ git config --global user.name "zClank"

////// 20102800@l3086089:~/Downloads/identifier$ git add identifier.c 

////// 20102800@l3086089:~/Downloads/identifier$ git commit

// [main 521fa4d] Teste 2 Aula
//  1 file changed, 1 insertion(+), 1 deletion(-)

////// 20102800@l3086089:~/Downloads/identifier$ git push

// Enumerating objects: 5, done.
// Counting objects: 100% (5/5), done.
// Delta compression using up to 4 threads
// Compressing objects: 100% (3/3), done.
// Writing objects: 100% (3/3), 288 bytes | 288.00 KiB/s, done.
// Total 3 (delta 2), reused 0 (delta 0), pack-reused 0
// remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
// To https://github.com/zClank/identifier.git
//    bb2f7de..521fa4d  main -> main
// 20102800@l3086089:~/Downloads/identifier$ git add identifier.c 
// 20102800@l3086089:~/Downloads/identifier$ git commit
// [main 8ad01da] Funcionando 3
//  1 file changed, 1 insertion(+), 1 deletion(-)

////// 20102800@l3086089:~/Downloads/identifier$ git push

// Enumerating objects: 5, done.
// Counting objects: 100% (5/5), done.
// Delta compression using up to 4 threads
// Compressing objects: 100% (3/3), done.
// Writing objects: 100% (3/3), 289 bytes | 289.00 KiB/s, done.
// Total 3 (delta 2), reused 0 (delta 0), pack-reused 0
// remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
// To https://github.com/zClank/identifier.git
//    521fa4d..8ad01da  main -> main

////// 20102800@l3086089:~/Downloads/identifier$ make

// gcc -g -Wall -Wfatal-errors  -o identifier identifier.c

////// 20102800@l3086089:~/Downloads/identifier$ git add identifier.c 
////// 20102800@l3086089:~/Downloads/identifier$ git commit


// On branch main
// Your branch is up to date with 'origin/main'.

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         identifier

// nothing added to commit but untracked files present (use "git add" to track)

////// 20102800@l3086089:~/Downloads/identifier$ git push

// Everything up-to-date

////// 20102800@l3086089:~/Downloads/identifier$ git commit

// On branch main
// Your branch is up to date with 'origin/main'.

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         identifier

// nothing added to commit but untracked files present (use "git add" to track)