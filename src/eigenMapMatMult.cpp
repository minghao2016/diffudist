#include <Rcpp.h>
#include <RcppEigen.h>

// [[Rcpp::depends(RcppEigen)]]

//' Matrix Multiplication using RcppEigen
//'
//' Matrix multiplication of the two matrices in input, without copy.
//' @param A numeric matrix of dimension \eqn{m \times n}
//' @param B numeric matrix of dimension \eqn{n \times l}
//' @return C matrix of dimension \eqn{m \times p} of the row-column product of A and B and C
//' @export
// [[Rcpp::export]]
Eigen::MatrixXd eigenMapMatMult(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B){
  Eigen::MatrixXd C = A * B;

  return(C);
}
