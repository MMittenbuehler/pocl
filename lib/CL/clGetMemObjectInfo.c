#include "pocl_cl.h"

                                    
CL_API_ENTRY cl_int CL_API_CALL
clGetMemObjectInfo(cl_mem            memobj ,
                   cl_mem_info       param_name , 
                   size_t            param_value_size ,
                   void *            param_value ,
                   size_t *          param_value_size_ret ) CL_API_SUFFIX__VERSION_1_0
{
  POCL_ABORT_UNIMPLEMENTED();
  return CL_SUCCESS;
}

