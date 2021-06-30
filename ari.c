#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

string ari(string s){
  char *t = s;
  int character = 0;
  int word = 0;
  int sentence = 0;
  float score = 0.0;
  char *grade[]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
  
  for(; *t != '\0' ; t++){
    if(isalnum(*t)){
      character++;
    }
    if(*t == ' '){
      word++;
    }
    if( *t=='.' || *t=='?' || *t=='!' ){
      sentence++;
    }
  }
  score=(int)ceil(4.71*((float)character/word)+0.5*((float)word/sentence)-21.43);
  return grade[score-1];
}
