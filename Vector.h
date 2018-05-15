//
//  Matrix.h
//  FRE6883Spring2018TeamProject
//
//  Created by Congqing Ye on 4/27/18.
//  Copyright © 2018 Congqing Ye. All rights reserved.
//

#ifndef Vector_h
#define Vector_h

#include <vector>
#include <map>
#include <iostream>
#include "Stock.h"

using namespace std;
//stock price
typedef vector<double> Vector;
//stock name
typedef vector<string> StringVector;
//one group stock information(ticker, dates)
typedef vector<Stock*> StockVector;
// one group ticker and stock price
typedef map<string, Vector*> Map;


Vector operator+(const Vector& V,const Vector& W);
Vector operator-(const Vector& V, const Vector& W);
Vector operator/(const Vector& V, const Vector& W);
Vector operator/(const Vector& V, const int x);
ostream & operator<<(ostream & out, Vector & V);
ostream & operator<<(ostream & out, vector<int> & V);

#endif /* Vector_h */
