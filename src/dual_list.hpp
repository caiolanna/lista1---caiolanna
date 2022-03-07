// Copyright (c) 2022

// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
// ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
// SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
// ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
// OR OTHER DEALINGS IN THE SOFTWARE.

#include "./dual_list.h"
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <sstream>

using std::ostringstream;
using std::pair;
using std::string;
using std::vector;

 /*void troca(pair c) 
{
   int aux = *a;
   *a = *b;
   *b = aux;
   } */

template<class T1, class T2>

vector<string> convert_string (vector <pair <T1, T2>> vet)
{
  vector<string> convertidos;
 for ( i = 0; i < vet.size(); i++)
 {
     ostringstream s1;
     ostringstream s2;
     s1 << vet[i].first;
     s2 << vet[i].second;
    string str1 = s1.str();
    string str2 = s2.str();
    string str_final = "(" + str1 + "," + str2 + ")";
    convertidos.push_back(str_final);

 }
  
    return convertidos;
}



template<class T1, class T2>
DualList<T1, T2>::DualList() { }

template<class T1, class T2>
void DualList<T1, T2>::Insert(T1 x1, T2 x2) {
  pair <T1, T2> c;
  c.first = x1;
  c.second = x2;
  dual_list.push_back(c);
  return;
}

template<class T1, class T2>
int DualList<T1, T2>::Size() const {
  
  return dual_list.size();
}

template<class T1, class T2>
T2 DualList<T1, T2>::ExtractMinKey1() {
  
  return T2();
}

template<class T1, class T2>
T1 DualList<T1, T2>::ExtractMinKey2() {
  return T1();
}

template<class T1, class T2>
vector<string> DualList<T1, T2>::ListByKey1() const 
{
  vector<string> dual_list_string;
  if (dual_list.size() > 0)
  
  {
    // Ordenando o vetor pela chave x1 utilizando o método bubbleSort
    int n = dual_list.size();
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
  { 
    for (j = 0; j < n-i-1; j++) 
      { 
        if (dual_list[j] > dual_list[j+1]) 
        {
        pair<T1, T2> aux1 = dual_list[j];
        pair<T1, T2> aux2 = dual_list[j+1];
        dual_list[j] = aux2;
        dual_list[j+1] = aux1;


      }
      }}
   
   dual_list_string = convert_string(dual_list);
   }

   return dual_list_string;
  }
  


template<class T1, class T2>
vector<string> DualList<T1, T2>::ListByKey2() const {
  return vector<string>();
}
