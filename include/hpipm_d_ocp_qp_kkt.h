/**************************************************************************************************
*                                                                                                 *
* This file is part of HPIPM.                                                                     *
*                                                                                                 *
* HPIPM -- High Performance Interior Point Method.                                                *
* Copyright (C) 2017 by Gianluca Frison.                                                          *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* HPIPM is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPIPM is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPIPM; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/




//
void d_init_var_hard_ocp_qp(struct d_ocp_qp *qp, struct d_ocp_qp_sol *qp_sol, struct d_ipm_hard_ocp_qp_workspace *ws);
//
void d_compute_res_hard_ocp_qp(struct d_ocp_qp *qp, struct d_ocp_qp_sol *qp_sol, struct d_ipm_hard_ocp_qp_workspace *ws);
//
void d_fact_solve_kkt_unconstr_ocp_qp(struct d_ocp_qp *qp, struct d_ocp_qp_sol *qp_sol, struct d_ipm_hard_ocp_qp_workspace *ws);
//
void d_fact_solve_kkt_step_hard_ocp_qp(struct d_ocp_qp *qp, struct d_ipm_hard_ocp_qp_workspace *ws);
//
void d_solve_kkt_step_hard_ocp_qp(struct d_ocp_qp *qp, struct d_ipm_hard_ocp_qp_workspace *ws);