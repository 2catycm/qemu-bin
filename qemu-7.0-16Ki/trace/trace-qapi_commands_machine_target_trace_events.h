/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_MACHINE_TARGET_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_MACHINE_TARGET_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_EVENT;
extern uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_DSTATE;
#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_cpu_model_comparison(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_cpu_model_comparison " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 52 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_enter_query_cpu_model_comparison " "%s" "\n", json);
#line 56 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_cpu_model_comparison(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_cpu_model_comparison(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_cpu_model_comparison(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_cpu_model_comparison " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 83 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_exit_query_cpu_model_comparison " "%s %d" "\n", result, succeeded);
#line 87 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_cpu_model_comparison(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_cpu_model_comparison(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_cpu_model_baseline(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_cpu_model_baseline " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 114 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_enter_query_cpu_model_baseline " "%s" "\n", json);
#line 118 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_cpu_model_baseline(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_cpu_model_baseline(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_cpu_model_baseline(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_cpu_model_baseline " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 145 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_exit_query_cpu_model_baseline " "%s %d" "\n", result, succeeded);
#line 149 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_cpu_model_baseline(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_cpu_model_baseline(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_cpu_model_expansion(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_cpu_model_expansion " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 176 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_enter_query_cpu_model_expansion " "%s" "\n", json);
#line 180 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_cpu_model_expansion(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_cpu_model_expansion(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_cpu_model_expansion(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_cpu_model_expansion " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 207 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_exit_query_cpu_model_expansion " "%s %d" "\n", result, succeeded);
#line 211 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_cpu_model_expansion(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_cpu_model_expansion(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_cpu_definitions(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_cpu_definitions " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 238 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 9 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_enter_query_cpu_definitions " "%s" "\n", json);
#line 242 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_cpu_definitions(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_cpu_definitions(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_cpu_definitions(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_cpu_definitions " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 269 "trace/trace-qapi_commands_machine_target_trace_events.h"
        } else {
#line 10 "qapi/qapi-commands-machine-target.trace-events"
            qemu_log("qmp_exit_query_cpu_definitions " "%s %d" "\n", result, succeeded);
#line 273 "trace/trace-qapi_commands_machine_target_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_cpu_definitions(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_cpu_definitions(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_MACHINE_TARGET_TRACE_EVENTS_GENERATED_TRACERS_H */
