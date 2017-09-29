/*
Palindrom reads in a sentence, and excluding punctuation, tells you if it is a palindrome
Made by Mihira Sogal on 9/19/2017
 */
# include <iostream>
# include <cstring>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
  char strin[80];
  char letters[80];
  char backwards[80];
  cout << "What is you sentence?"<< endl;
  cin.get(strin, 80);
  cin.get();
  //go through the input; for each letter, fill it into the array of letters
  int count = 0;
  for( int i = 0; i < 80; i++){
    if(isalpha(strin[i])){
      letters[count] =tolower(strin[i]);
	count++;
	//also fill in the terminal chracter when you find it
      }else if(strin[i] == '\0'){
	letters[count+1] = strin[i];
	break;
      }
  }
  //now create the backwards string
  int count2 = 0;
  for(int i = count-1; i >= 0; i--){
    backwards[count2] = letters[i];
    count2++;
  }
  //add back the null character
  backwards[count2] = letters[count];
  //now compare the original string to the backwards version; if they are the same, inform the user that they put in a palindrome
  if(strcmp(letters, backwards)==0){
    cout<<"That's a palindrome!"<<endl;
  }else{
    cout<<"Not a palindrome"<<endl;
  }
  
  
  return 0;
}
