const char* dgemm_desc = "My awesome dgemm.";

void square_dgemm(const int M, const double *A, const double *B, double *C)
{
    int i, j, k;
    for (i = 0; i < M; ++i) {
        for (j = 0; j < M; ++j) {
            int jm = j*M;
            double cij = C[jm+i];
            for (k = 0; k < M; ++k)
                cij += A[k*M+i] * B[jm+k];
            C[jm+i] = cij;
        }
    }
}
