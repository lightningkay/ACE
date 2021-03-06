
//=============================================================================
/**
 *  @file    root_cns.cpp
 *
 *  $Id: root_cns.cpp 95536 2012-02-20 12:34:23Z johnnyw $
 *
 *  Visitor generating code for Root in the CIAO
 *  connector impl source
 *
 *
 *  @author Jeff Parsons
 */
//=============================================================================

#include "root.h"

be_visitor_root_cns::be_visitor_root_cns (be_visitor_context *ctx)
  : be_visitor_root (ctx)
{
}

be_visitor_root_cns::~be_visitor_root_cns (void)
{
}

int
be_visitor_root_cns::visit_root (be_root *node)
{
  if (this->init () == -1)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         ACE_TEXT ("be_visitor_root_cns::init - ")
                         ACE_TEXT ("failed to initialize\n")),
                        -1);
    }

  if (this->visit_scope (node) == -1)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         ACE_TEXT ("be_visitor_root_cns::visit_root - ")
                         ACE_TEXT ("codegen for scope failed\n")),
                        -1);
    }

  (void) tao_cg->end_ciao_conn_source ();

  return 0;
}

int
be_visitor_root_cns::init (void)
{
  // First open the client-side header file for writing.
  int status =
    tao_cg->start_ciao_conn_source (
      be_global->be_get_ciao_conn_src_fname ());

  if (status == -1)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         ACE_TEXT ("be_visitor_root_cns::init - ")
                         ACE_TEXT ("Error opening CIAO conn impl ")
                         ACE_TEXT ("source file\n")),
                        -1);
    }

  // Initialize the stream.
  this->ctx_->stream (tao_cg->ciao_conn_source ());

  return 0;
}
