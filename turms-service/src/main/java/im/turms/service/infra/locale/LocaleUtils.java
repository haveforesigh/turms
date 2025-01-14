/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.service.infra.locale;

import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

/**
 * @author James Chen
 */
public final class LocaleUtils {

    private static final Map<String, Locale> ID_TO_LOCALE;

    static {
        ID_TO_LOCALE = new HashMap<>(2048);
        // Use "availableLocales()" to avoid unnecessary copy.
        Locale.availableLocales()
                .forEach(locale -> ID_TO_LOCALE.put(locale.toLanguageTag(), locale));
    }

    private LocaleUtils() {
    }

    public static boolean isAvailableLanguage(String languageId) {
        return ID_TO_LOCALE.containsKey(languageId);
    }

}