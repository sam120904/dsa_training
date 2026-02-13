vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m)
{
    int i = 0, j = 0;
    vector<int> result;

    while (i < n && j < m) {
        if (A[i] == B[j]) {
            result.push_back(A[i]);
            i++;
            j++;
        }
        else if (A[i] < B[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return result;
}
