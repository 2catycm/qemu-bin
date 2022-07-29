/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_mips.h"

uint16_t _TRACE_GT64120_READ_DSTATE;
uint16_t _TRACE_GT64120_WRITE_DSTATE;
uint16_t _TRACE_GT64120_READ_INTREG_DSTATE;
uint16_t _TRACE_GT64120_WRITE_INTREG_DSTATE;
uint16_t _TRACE_GT64120_ISD_REMAP_DSTATE;
TraceEvent _TRACE_GT64120_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gt64120_read",
    .sstate = TRACE_GT64120_READ_ENABLED,
    .dstate = &_TRACE_GT64120_READ_DSTATE 
};
TraceEvent _TRACE_GT64120_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gt64120_write",
    .sstate = TRACE_GT64120_WRITE_ENABLED,
    .dstate = &_TRACE_GT64120_WRITE_DSTATE 
};
TraceEvent _TRACE_GT64120_READ_INTREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gt64120_read_intreg",
    .sstate = TRACE_GT64120_READ_INTREG_ENABLED,
    .dstate = &_TRACE_GT64120_READ_INTREG_DSTATE 
};
TraceEvent _TRACE_GT64120_WRITE_INTREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gt64120_write_intreg",
    .sstate = TRACE_GT64120_WRITE_INTREG_ENABLED,
    .dstate = &_TRACE_GT64120_WRITE_INTREG_DSTATE 
};
TraceEvent _TRACE_GT64120_ISD_REMAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "gt64120_isd_remap",
    .sstate = TRACE_GT64120_ISD_REMAP_ENABLED,
    .dstate = &_TRACE_GT64120_ISD_REMAP_DSTATE 
};
TraceEvent *hw_mips_trace_events[] = {
    &_TRACE_GT64120_READ_EVENT,
    &_TRACE_GT64120_WRITE_EVENT,
    &_TRACE_GT64120_READ_INTREG_EVENT,
    &_TRACE_GT64120_WRITE_INTREG_EVENT,
    &_TRACE_GT64120_ISD_REMAP_EVENT,
  NULL,
};

static void trace_hw_mips_register_events(void)
{
    trace_event_register_group(hw_mips_trace_events);
}
trace_init(trace_hw_mips_register_events)
