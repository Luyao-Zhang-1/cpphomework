#include<iostream>
using namespace std;

int main(){
    char sentence[500];
    cin.getline(sentence,500);
    int spacePosition[500];
    int spaceNumber = 0;
    int wordLength[500];
    int wordNumber = 0;
    int longestLength = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++){
        if ((sentence[i] == ' ') | (sentence[i] == '.')){
            spacePosition[spaceNumber] = i;
            if (spaceNumber == 0){
                wordLength[wordNumber] = i;  
                wordNumber++;
            }
            if (spaceNumber != 0){
                wordLength[wordNumber] = spacePosition[spaceNumber] - spacePosition[spaceNumber-1] - 1;
                wordNumber++;
                }
            spaceNumber++; 
        } 
    }
    for (int i = 0; i < wordNumber; i++){
        if (wordLength[i] > longestLength){
            longestLength = wordLength[i];
        }
    }
    
    for (int longestWordNumber = 0; longestWordNumber < wordNumber; longestWordNumber++){
        if (wordLength[longestWordNumber] == longestLength){
            int startPostion =spacePosition[longestWordNumber-1]+1;
            int endPosition = spacePosition[longestWordNumber]-1;
            if (longestWordNumber == 0) {
                for (int m = 0; m <= endPosition; m++){
                cout << sentence[m];
                }
            } else {for (int m = startPostion; m <= endPosition; m++){
                cout << sentence[m];
            }
            }
            return 0;
        }
    }
    return 0;
}