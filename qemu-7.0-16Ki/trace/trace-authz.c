/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-authz.h"

uint16_t _TRACE_QAUTHZ_IS_ALLOWED_DSTATE;
uint16_t _TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_DSTATE;
uint16_t _TRACE_QAUTHZ_LIST_CHECK_RULE_DSTATE;
uint16_t _TRACE_QAUTHZ_LIST_DEFAULT_POLICY_DSTATE;
uint16_t _TRACE_QAUTHZ_LIST_FILE_LOAD_DSTATE;
uint16_t _TRACE_QAUTHZ_LIST_FILE_REFRESH_DSTATE;
uint16_t _TRACE_QAUTHZ_PAM_CHECK_DSTATE;
TraceEvent _TRACE_QAUTHZ_IS_ALLOWED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_is_allowed",
    .sstate = TRACE_QAUTHZ_IS_ALLOWED_ENABLED,
    .dstate = &_TRACE_QAUTHZ_IS_ALLOWED_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_simple_is_allowed",
    .sstate = TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_ENABLED,
    .dstate = &_TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_LIST_CHECK_RULE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_list_check_rule",
    .sstate = TRACE_QAUTHZ_LIST_CHECK_RULE_ENABLED,
    .dstate = &_TRACE_QAUTHZ_LIST_CHECK_RULE_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_LIST_DEFAULT_POLICY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_list_default_policy",
    .sstate = TRACE_QAUTHZ_LIST_DEFAULT_POLICY_ENABLED,
    .dstate = &_TRACE_QAUTHZ_LIST_DEFAULT_POLICY_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_LIST_FILE_LOAD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_list_file_load",
    .sstate = TRACE_QAUTHZ_LIST_FILE_LOAD_ENABLED,
    .dstate = &_TRACE_QAUTHZ_LIST_FILE_LOAD_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_LIST_FILE_REFRESH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_list_file_refresh",
    .sstate = TRACE_QAUTHZ_LIST_FILE_REFRESH_ENABLED,
    .dstate = &_TRACE_QAUTHZ_LIST_FILE_REFRESH_DSTATE 
};
TraceEvent _TRACE_QAUTHZ_PAM_CHECK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qauthz_pam_check",
    .sstate = TRACE_QAUTHZ_PAM_CHECK_ENABLED,
    .dstate = &_TRACE_QAUTHZ_PAM_CHECK_DSTATE 
};
TraceEvent *authz_trace_events[] = {
    &_TRACE_QAUTHZ_IS_ALLOWED_EVENT,
    &_TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_EVENT,
    &_TRACE_QAUTHZ_LIST_CHECK_RULE_EVENT,
    &_TRACE_QAUTHZ_LIST_DEFAULT_POLICY_EVENT,
    &_TRACE_QAUTHZ_LIST_FILE_LOAD_EVENT,
    &_TRACE_QAUTHZ_LIST_FILE_REFRESH_EVENT,
    &_TRACE_QAUTHZ_PAM_CHECK_EVENT,
  NULL,
};

static void trace_authz_register_events(void)
{
    trace_event_register_group(authz_trace_events);
}
trace_init(trace_authz_register_events)
