/* Given is the code to print numbers from 1 to n in increasing order recursively. 
But it contains few bugs that you need to rectify such that all the test cases pass.

Sample Input 1 :
 6
Sample Output 1 :
1 2 3 4 5 6 */

int N = 1;
void print(int n){
    if(n == 1){
        cout << N << " ";
        return;
    }
    cout << N << " ";
    N++;
    print(n - 1);
}
