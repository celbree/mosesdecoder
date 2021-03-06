/*********************************
tercpp: an open-source Translation Edit Rate (TER) scorer tool for Machine Translation.

Copyright 2010-2013, Christophe Servan, LIUM, University of Le Mans, France
Contact: christophe.servan@lium.univ-lemans.fr

The tercpp tool and library are free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 2.1 of the licence, or
(at your option) any later version.

This program and library are distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
for more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation,
Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
**********************************/
#include "stringInfosHasher.h"
// The following class defines a hash function for strings


using namespace std;
using namespace TERCPPNS_Tools;

namespace TERCPPNS_HashMapSpace
{
stringInfosHasher::stringInfosHasher ( long cle, string cleTxt, vector<string> valueVecInt )
{
  m_hashKey=cle;
  m_key=cleTxt;
  m_value=valueVecInt;
}
//     stringInfosHasher::~stringInfosHasher(){};*/
long  stringInfosHasher::getHashKey()
{
  return m_hashKey;
}
string  stringInfosHasher::getKey()
{
  return m_key;
}
vector<string> stringInfosHasher::getValue()
{
  return m_value;
}
void stringInfosHasher::setValue ( vector<string>   value )
{
  m_value=value;
}
string stringInfosHasher::toString()
{
  stringstream to_return;
  to_return << m_hashKey << "\t" << m_key << "\t" << vectorToString(m_value,"\t") << endl;
  return to_return.str();
}


// typedef stdext::hash_map<string, string, stringhasher> HASH_S_S;
}
