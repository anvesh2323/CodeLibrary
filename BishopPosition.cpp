/*
QUESTION
Type: EASY
Description:
    Grandmaster Viswanathan Anand is a pro player.
    One day while playing, Vishy finds something fishy ( he feels that he may lose his Bishop in the very next move made by his oponent ).
    So he decides to move his bishop.
    Assuming there are no Chess Pieces in the Bishops way.
    Print all the possible ways Vishy can move his bishop into a safe place. 
*/

#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;


vector<int> addCoordinate(int x, int y){
    vector<int> temp;
    temp.push_back(x); temp.push_back(y);
    
    return temp;
}

vector<vector<int>> bishopMoves(int n, int i, int j){
    vector<vector<int>> moves;

//       " -1st Quad- "
    for(int k = i+1, l = j+1; k<n and l<n; k++, l++){
        moves.push_back(addCoordinate(k,l));
    }

//       " -2nd Quad- "
    for(int k = i-1, l = j+1; k>=0 and l<n; k--, l++){
        moves.push_back(addCoordinate(k,l));
    }

//       " -3rd Quad- "
    for(int k = i, l = j; k>=0 and l>=0; k--, l--){
        moves.push_back(addCoordinate(k,l));
    }

//       " -4th Quad- "
    for(int k = i+1, l = j-1; k<n and l>=0; k++, l--){
        moves.push_back(addCoordinate(k,l));
    }


    return moves;
}

int main(){
    vector<vector<int>> moves = bishopMoves(8, 1, 0);

    sort(moves.begin(), moves.end());

    for(auto itr: moves){
        for(auto it: itr) cout<<it<<' ';
        cout<<endl;
    }

    return 0;
}
