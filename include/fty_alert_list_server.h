/*  =========================================================================
    fty_alert_list_server - Providing information about active alerts

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
 */

#ifndef FTY_ALERT_LIST_SERVER_H_INCLUDED
#define FTY_ALERT_LIST_SERVER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

    //  @interface

    //  zactor ready fnction
    FTY_ALERT_LIST_EXPORT void
    fty_alert_list_server_stream(zsock_t *pipe, void *args);

    FTY_ALERT_LIST_EXPORT void
    init_alert(bool verb);

    FTY_ALERT_LIST_EXPORT void
    destroy_alert();

    FTY_ALERT_LIST_EXPORT void
    save_alerts();

    FTY_ALERT_LIST_EXPORT void
    fty_alert_list_server_mailbox(zsock_t *pipe, void *args);

    FTY_ALERT_LIST_EXPORT void
    fty_alert_list_server_test(bool verbose);
    //  @end

#ifdef __cplusplus
}
#endif

#endif
