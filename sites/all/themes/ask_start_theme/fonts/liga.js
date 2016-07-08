/* A polyfill for browsers that don't support ligatures. */
/* The script tag referring to this file must be placed before the ending body tag. */

/* To provide support for elements dynamically added, this script adds
   method 'icomoonLiga' to the window object. You can pass element references to this method.
*/
(function () {
    'use strict';
    function supportsProperty(p) {
        var prefixes = ['Webkit', 'Moz', 'O', 'ms'],
            i,
            div = document.createElement('div'),
            ret = p in div.style;
        if (!ret) {
            p = p.charAt(0).toUpperCase() + p.substr(1);
            for (i = 0; i < prefixes.length; i += 1) {
                ret = prefixes[i] + p in div.style;
                if (ret) {
                    break;
                }
            }
        }
        return ret;
    }
    var icons;
    if (!supportsProperty('fontFeatureSettings')) {
        icons = {
            'ac_unit': '&#xe900;',
            'access_time': '&#xe901;',
            'query_builder': '&#xe901;',
            'schedule': '&#xe901;',
            'accessible': '&#xe902;',
            'account_balance': '&#xe903;',
            'account_box': '&#xe904;',
            'account_circle': '&#xe905;',
            'add': '&#xe906;',
            'add_a_photo': '&#xe907;',
            'add_box': '&#xe908;',
            'add_circle': '&#xe909;',
            'add_circle_outline': '&#xe90a;',
            'control_point': '&#xe90a;',
            'add_location': '&#xe90b;',
            'add_to_photos': '&#xe90c;',
            'library_add': '&#xe90c;',
            'queue': '&#xe90c;',
            'add_to_queue': '&#xe90d;',
            'adjust': '&#xe90e;',
            'airport_shuttle': '&#xe90f;',
            'announcement': '&#xe910;',
            'apps': '&#xe911;',
            'arrow_back': '&#xe912;',
            'arrow_downward': '&#xe913;',
            'arrow_forward': '&#xe914;',
            'arrow_upward': '&#xe915;',
            'assignment_ind': '&#xe916;',
            'assignment_turned_in': '&#xe917;',
            'attach_file': '&#xe918;',
            'autorenew': '&#xe919;',
            'beenhere': '&#xe91a;',
            'bookmark': '&#xe91b;',
            'turned_in': '&#xe91b;',
            'bookmark_border': '&#xe91c;',
            'turned_in_not': '&#xe91c;',
            'burst_mode': '&#xe91d;',
            'call': '&#xe91e;',
            'local_phone': '&#xe91e;',
            'phone': '&#xe91e;',
            'camera_alt': '&#xe91f;',
            'local_see': '&#xe91f;',
            'photo_camera': '&#xe91f;',
            'card_membership': '&#xe920;',
            'card_travel': '&#xe921;',
            'chat': '&#xe922;',
            'chat_bubble': '&#xe923;',
            'chat_bubble_outline': '&#xe924;',
            'check': '&#xe925;',
            'check_box_outline_blank': '&#xe926;',
            'chevron_left': '&#xe927;',
            'navigate_before': '&#xe927;',
            'chevron_right': '&#xe928;',
            'navigate_next': '&#xe928;',
            'child_friendly': '&#xe929;',
            'clear': '&#xe92a;',
            'close': '&#xe92a;',
            'collections': '&#xe92b;',
            'photo_library': '&#xe92b;',
            'collections_bookmark': '&#xe92c;',
            'contacts': '&#xe92d;',
            'create': '&#xe92e;',
            'edit': '&#xe92e;',
            'mode_edit': '&#xe92e;',
            'delete': '&#xe92f;',
            'delete_forever': '&#xe930;',
            'do_not_disturb_alt': '&#xe931;',
            'done_all': '&#xe932;',
            'error_outline': '&#xe933;',
            'favorite': '&#xe934;',
            'favorite_border': '&#xe935;',
            'fiber_new': '&#xe05e;',
            'free_breakfast': '&#xe936;',
            'grade': '&#xe937;',
            'star': '&#xe937;',
            'group': '&#xe938;',
            'people': '&#xe938;',
            'group_add': '&#xe939;',
            'high_quality': '&#xe93a;',
            'info_outline': '&#xe93b;',
            'insert_emoticon': '&#xe93c;',
            'mood': '&#xe93c;',
            'tag_faces': '&#xe93c;',
            'insert_link': '&#xe93d;',
            'link': '&#xe93d;',
            'keyboard_arrow_down': '&#xe93e;',
            'keyboard_arrow_up': '&#xe93f;',
            'language': '&#xe940;',
            'local_hospital': '&#xe941;',
            'location_on': '&#xe942;',
            'place': '&#xe942;',
            'room': '&#xe942;',
            'mail_outline': '&#xe943;',
            'map': '&#xe944;',
            'menu': '&#xe5d2;',
            'mood_bad': '&#xe945;',
            'people_outline': '&#xe946;',
            'person': '&#xe947;',
            'person_add': '&#xe948;',
            'pin_drop': '&#xe949;',
            'search': '&#xe94a;',
            'security': '&#xe94b;',
            'sentiment_neutral': '&#xe94c;',
            'settings': '&#xe94d;',
            'star_border': '&#xe94e;',
            'star_half': '&#xe94f;',
            'thumb_down': '&#xe950;',
            'thumb_up': '&#xe951;',
            'verified_user': '&#xe952;',
            'google-plus2': '&#xe953;',
            'brand6': '&#xe953;',
            'facebook2': '&#xe954;',
            'brand11': '&#xe954;',
          '0': 0
        };
        delete icons['0'];
        window.icomoonLiga = function (els) {
            var classes,
                el,
                i,
                innerHTML,
                key;
            els = els || document.getElementsByTagName('*');
            if (!els.length) {
                els = [els];
            }
            for (i = 0; ; i += 1) {
                el = els[i];
                if (!el) {
                    break;
                }
                classes = el.className;
                if (/icon-/.test(classes)) {
                    innerHTML = el.innerHTML;
                    if (innerHTML && innerHTML.length > 1) {
                        for (key in icons) {
                            if (icons.hasOwnProperty(key)) {
                                innerHTML = innerHTML.replace(new RegExp(key, 'g'), icons[key]);
                            }
                        }
                        el.innerHTML = innerHTML;
                    }
                }
            }
        };
        window.icomoonLiga();
    }
}());
