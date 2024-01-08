// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// c++;
// }
// ans - O(logn)

// int c = 0;
// for(int i = n; i > 1; i /= i) {
// c++;
// }

// ans - O(1)

// int c = 0;
// for(int i = 0; i < n; i += k) {
// c++;
// }

// ans - O(n/k) ~ O(n)

// int c = 0;
// for(int i = 1; i < n; i *= 2) {
// c++;
// }

// ans - O(logn)


// int c = 0;
// for(int i = 0; i < n; i++) {
// c +=i;
// }

// ans - O(n)


// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 0; j < i; j++){
// c++;
// }
// }

// ans - O(n2)
