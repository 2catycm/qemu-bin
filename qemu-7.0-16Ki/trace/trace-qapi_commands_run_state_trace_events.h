/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_RUN_STATE_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_RUN_STATE_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_QUERY_STATUS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_STATUS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_WATCHDOG_SET_ACTION_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_WATCHDOG_SET_ACTION_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_SET_ACTION_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_SET_ACTION_EVENT;
extern uint16_t _TRACE_QMP_ENTER_QUERY_STATUS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_STATUS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_WATCHDOG_SET_ACTION_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_WATCHDOG_SET_ACTION_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_SET_ACTION_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_SET_ACTION_DSTATE;
#define TRACE_QMP_ENTER_QUERY_STATUS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_STATUS_ENABLED 1
#define TRACE_QMP_ENTER_WATCHDOG_SET_ACTION_ENABLED 1
#define TRACE_QMP_EXIT_WATCHDOG_SET_ACTION_ENABLED 1
#define TRACE_QMP_ENTER_SET_ACTION_ENABLED 1
#define TRACE_QMP_EXIT_SET_ACTION_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_QUERY_STATUS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_STATUS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_status(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_STATUS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_status " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 46 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_enter_query_status " "%s" "\n", json);
#line 50 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_status(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_status(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_STATUS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_STATUS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_status(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_STATUS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_status " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 77 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_exit_query_status " "%s %d" "\n", result, succeeded);
#line 81 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_status(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_status(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_WATCHDOG_SET_ACTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_WATCHDOG_SET_ACTION) || \
    false)

static inline void _nocheck__trace_qmp_enter_watchdog_set_action(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_WATCHDOG_SET_ACTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_watchdog_set_action " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 108 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_enter_watchdog_set_action " "%s" "\n", json);
#line 112 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_watchdog_set_action(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_watchdog_set_action(json);
    }
}

#define TRACE_QMP_EXIT_WATCHDOG_SET_ACTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_WATCHDOG_SET_ACTION) || \
    false)

static inline void _nocheck__trace_qmp_exit_watchdog_set_action(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_WATCHDOG_SET_ACTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_watchdog_set_action " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 139 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_exit_watchdog_set_action " "%s %d" "\n", result, succeeded);
#line 143 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_watchdog_set_action(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_watchdog_set_action(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_SET_ACTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_SET_ACTION) || \
    false)

static inline void _nocheck__trace_qmp_enter_set_action(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_SET_ACTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_set_action " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 170 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_enter_set_action " "%s" "\n", json);
#line 174 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_set_action(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_set_action(json);
    }
}

#define TRACE_QMP_EXIT_SET_ACTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_SET_ACTION) || \
    false)

static inline void _nocheck__trace_qmp_exit_set_action(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_SET_ACTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_set_action " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 201 "trace/trace-qapi_commands_run_state_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-run-state.trace-events"
            qemu_log("qmp_exit_set_action " "%s %d" "\n", result, succeeded);
#line 205 "trace/trace-qapi_commands_run_state_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_set_action(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_set_action(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_RUN_STATE_TRACE_EVENTS_GENERATED_TRACERS_H */
