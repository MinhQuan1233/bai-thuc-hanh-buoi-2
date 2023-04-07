// Thuat toan sap xep vun dong
// Hàm vun đống cho một đỉnh
void heapify(int arr[], int n, int i){  // mảng arr, n - số phần tử, i - đỉnh cần vun đống
    int max =i;    // Lưu vị trí đỉnh max ban đầu
    int l = i*2 +1;   // Vị trí con trái
    int r = l+1;    // Vị trí con phải
    if(l<n && arr[l] > arr[max]){   // Nếu tồn tại con trái lớn hơn cha, gán max = L
        max = l;
    }
    
    if(r<n && arr[r] > arr[max]){   // Nếu tồn tại con phải lớn hơn arr[max], gán max = r
        max = r;
    }
    if(max != i){      // Nếu max != i, tức là cha không phải lớn nhất
        swap(arr[i], arr[max]);   // Đổi chỗ cho phần tử lớn nhất làm cha
        heapify(arr ,n , max);    // Đệ quy vun các node phía dưới
    }
    
}
https://duongdinh24.com/
