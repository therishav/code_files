// vector implementation
int main() {
    // get matrix size and queries count
    int d, queriesSize;
    cin >> arraySize >> queriesSize;

    // here I'll store my matrix of dimensione d
    vector<vector<int>> matrix(d);

    // for each vector (by reference)...
    for(auto& q : matrix)
    {
        // read the size of the vecotr
        int size; cin >> size;

        // copy "size" elements from
        //     cin (standard input) to my q vector pushing them
        copy_n(istream_iterator<int>(cin), size, back_inserter(q));
    }

    // for each query...
    for (auto i = 0; i < queriesSize; ++i)
    {
        // get index and query...
        int index, query;
        cin >> index >> query;

        // ... and print the query
        cout << matrix[index][query] << endl;
    }
    return 0;
}

// C tyle array implementation


using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int q;
    cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}
