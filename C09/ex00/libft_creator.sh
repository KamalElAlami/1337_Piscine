# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kael-ala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 16:31:21 by kael-ala          #+#    #+#              #
#    Updated: 2023/10/01 16:45:19 by kael-ala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


gcc -Wall -Werror -Wextra -c *.c
ar rcs libft.a *.o
rm -r  *.o
