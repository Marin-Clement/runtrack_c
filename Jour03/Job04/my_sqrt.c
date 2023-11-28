int my_sqrt(int num) {
    int result = 0;
    while (result * result <= num) {
        result++;
    }
    result--;
    if (result * result != num) {
        result = 0;
    }
    return result;
}