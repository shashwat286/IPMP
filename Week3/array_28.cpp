vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int j = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            j++;
            swap(A[i], A[j]);
        }
    }
        return A;
    }