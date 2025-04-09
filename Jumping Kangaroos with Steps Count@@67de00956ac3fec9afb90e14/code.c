int kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        if (x1 == x2)
            return 0;  // Already at same position
        else
            return -1; // Will never meet
    }

    int n = (x2 - x1) / (v1 - v2);

    if ((x2 - x1) % (v1 - v2) == 0 && n >= 0) {
        return n;  // Number of jumps needed to meet
    } else {
        return -1; // Will never meet
    }
}
