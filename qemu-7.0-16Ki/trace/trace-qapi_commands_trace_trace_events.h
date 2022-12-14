/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_TRACE_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_TRACE_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE_EVENT;
extern uint16_t _TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE_DSTATE;
#define TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE_ENABLED 1
#define TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE_ENABLED 1
#define TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE_ENABLED 1
#define TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE) || \
    false)

static inline void _nocheck__trace_qmp_enter_trace_event_get_state(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_TRACE_EVENT_GET_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-trace.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_trace_event_get_state " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 40 "trace/trace-qapi_commands_trace_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-trace.trace-events"
            qemu_log("qmp_enter_trace_event_get_state " "%s" "\n", json);
#line 44 "trace/trace-qapi_commands_trace_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_trace_event_get_state(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_trace_event_get_state(json);
    }
}

#define TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE) || \
    false)

static inline void _nocheck__trace_qmp_exit_trace_event_get_state(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_TRACE_EVENT_GET_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-trace.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_trace_event_get_state " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 71 "trace/trace-qapi_commands_trace_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-trace.trace-events"
            qemu_log("qmp_exit_trace_event_get_state " "%s %d" "\n", result, succeeded);
#line 75 "trace/trace-qapi_commands_trace_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_trace_event_get_state(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_trace_event_get_state(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE) || \
    false)

static inline void _nocheck__trace_qmp_enter_trace_event_set_state(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_TRACE_EVENT_SET_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-trace.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_trace_event_set_state " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 102 "trace/trace-qapi_commands_trace_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-trace.trace-events"
            qemu_log("qmp_enter_trace_event_set_state " "%s" "\n", json);
#line 106 "trace/trace-qapi_commands_trace_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_trace_event_set_state(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_trace_event_set_state(json);
    }
}

#define TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE) || \
    false)

static inline void _nocheck__trace_qmp_exit_trace_event_set_state(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_TRACE_EVENT_SET_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-trace.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_trace_event_set_state " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 133 "trace/trace-qapi_commands_trace_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-trace.trace-events"
            qemu_log("qmp_exit_trace_event_set_state " "%s %d" "\n", result, succeeded);
#line 137 "trace/trace-qapi_commands_trace_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_trace_event_set_state(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_trace_event_set_state(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_TRACE_TRACE_EVENTS_GENERATED_TRACERS_H */
