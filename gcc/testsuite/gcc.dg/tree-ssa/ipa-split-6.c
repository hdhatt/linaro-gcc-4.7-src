/* PR tree-optimization/52019 */
/* { dg-do compile } */
/* { dg-options "-O3 -fno-tree-sra -fdump-tree-fnsplit -fdump-tree-optimized" } */

#include "ipa-split-5.c"

/* { dg-final { scan-tree-dump-times "Splitting function" 1 "fnsplit"} } */
/* { dg-final { cleanup-tree-dump "fnsplit" } } */
/* { dg-final { scan-tree-dump "part" "optimized"} } */
/* { dg-final { cleanup-tree-dump "optimized" } } */
