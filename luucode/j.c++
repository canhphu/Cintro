#include<iostream>
using namespace std;
int main() {
   int i, j, ver, edg, minimum, p;
   cout<<"Enter the number of vertexes: ";
   cin>>ver;
   cout<<endl;
   edg = ver-1;
   int EDG[edg][2], DG[ver+1] = {0};
   cout<<"This tree has "<<edg<<" edges for "<<ver<<"vertexes.\n";
   cout<<"There are "<<edg<<" pairs of vertexes in the three.\n";
   for(i = 0; i < edg; i++) {
      cout<<"Enter the value of vertex pair for edge "<<i+1<<":\n";
      cout<<"Enter the value of V(1) vertex: ";
      cin>>EDG[i][0];
      cout<<"Enter the value of V(2) vertex: ";
      cin>>EDG[i][1];
      DG[EDG[i][0]]++;
      DG[EDG[i][1]]++;
   }
   cout<<"\nThe Prufer code for the tree is: { "; // Print the prufer code of the given tree.
   for(i = 0; i < ver-2; i++) {
      minimum = 10000;
      for(j = 0; j < edg; j++) {
         if(DG[EDG[j][0]] == 1) {
            if(minimum > EDG[j][0]) {
               minimum = EDG[j][0];
               p = j;
            }
         }
         if(DG[EDG[j][1]] == 1) {
            if(minimum > EDG[j][1]) {
               minimum = EDG[j][1];
               p = j;
            }
         }
      }
      DG[EDG[p][0]]--; // Remove the selected vertex by decreasing its degree to 0.
      DG[EDG[p][1]]--; // Decrement the degree of other vertex, since we have removed the EDG.
      if(DG[EDG[p][0]] == 0)
         cout<<EDG[p][1]<<" ";
      else
         cout<<EDG[p][0]<<" ";
   }
   cout<<"}";
   return 0;
}