#include "log.h"

log_id_t android_name_to_log_id(const char *logName) {
    return LOG_ID_MIN;
}

struct logger_list *android_logger_list_alloc_time(int mode,
                                                   log_time start,
                                                   pid_t pid) {
    return NULL;
}

struct logger *android_logger_open(struct logger_list *logger_list,
                                   log_id_t id) {
    return NULL;
}

int android_logger_list_read(struct logger_list *logger_list,
                             struct log_msg *log_msg) {
    return 0;
}

void android_logger_list_free(struct logger_list *logger_list) {

}
